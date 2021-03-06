//
//  getPDFPageArrayFromPDF.h
//  Mangao
//
//  Created by Ryota Minami <RyotaMinami93@gmail.com> on 2014/01/19.
//  Copyright (c) 2013, 2014 Ryota Minami. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Quartz/Quartz.h>

@interface importPDFPageArrayFromPDF : NSObject

- (NSMutableArray*)importPDFPageArrayFromPDF:(NSString*)PDFPath;

@end
