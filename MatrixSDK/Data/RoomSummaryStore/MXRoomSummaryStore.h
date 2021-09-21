// 
// Copyright 2021 The Matrix.org Foundation C.I.C
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import "MXRoomSummaryProtocol.h"

#ifndef MXRoomSummaryStore_h
#define MXRoomSummaryStore_h

@protocol MXRoomSummaryStore <NSObject>

/**
 The identifiers of the rooms currently stored.
 */
@property (nonatomic, readonly) NSArray<NSString *> * _Nonnull rooms;

/**
 Store the summary for a room.
 
 @param roomId the id of the room.
 @param summary the room summary.
 */
- (void)storeSummaryForRoom:(nonnull NSString*)roomId summary:(nonnull id<MXRoomSummaryProtocol>)summary;

/**
 Get the summary a room.
 
 @param roomId the id of the room.
 @return the user private data for this room.
 */
- (id<MXRoomSummaryProtocol> _Nullable)summaryOfRoom:(nonnull NSString*)roomId;

@end

#endif /* MXRoomSummaryStore_h */
