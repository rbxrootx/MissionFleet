// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2344 bytes across one range.

// Ghidra range: 0x58856560 .. +0x928 bytes.
extern "C" __declspec(naked) void FUN_58856560_segment_00() {
    __asm {
        // 0x58856560: push ebp
        __asm _emit 0x55
        // 0x58856561: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58856563: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x58856567: push edi
        __asm _emit 0x57
        // 0x58856568: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5885656A: je 0x58856e80
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856570: mov eax, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x3C
        // 0x58856573: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58856577: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58856579: je 0x5885659f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5885657B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5885657E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58856580: je 0x58856598
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58856582: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58856584: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58856586: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58856589: push edi
        __asm _emit 0x57
        // 0x5885658A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885658C: mov ecx, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x3C
        // 0x5885658F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58856592: je 0x5885659f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58856594: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58856596: jne 0x58856582
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58856598: pop edi
        __asm _emit 0x5F
        // 0x58856599: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885659B: pop ebp
        __asm _emit 0x5D
        // 0x5885659C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885659F: cmp dword ptr [ebp + 0x2d8], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565A6: jne 0x58856e80
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565AC: cmp dword ptr [edi + 4], 0x104
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565B3: jne 0x588565c5
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588565B5: cmp dword ptr [edi + 8], 0x12
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0x12
        // 0x588565B9: jne 0x588565c5
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588565BB: mov dword ptr [0x58a28370], 0x1f
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565C5: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x2C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588565CB: push esi
        __asm _emit 0x56
        // 0x588565CC: push edi
        __asm _emit 0x57
        // 0x588565CD: call 0x5889eac0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588565D2: mov edx, dword ptr [0x58a28370]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588565D8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588565DA: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x588565DC: cmp edx, 0x30
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x588565DF: jne 0x588565e3
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588565E1: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588565E3: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588565E6: cmp eax, 0x202
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565EB: ja 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565F1: je 0x58856e3f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565F7: sub eax, 0x100
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588565FC: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588565FF: ja 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x7A
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856605: jmp dword ptr [eax*4 + 0x58856e88]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x6E
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885660C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856612: call 0x587e7f20
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58856617: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58856619: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885661F: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856624: mov dword ptr [eax + 0x104e0], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885662E: mov dword ptr [eax + 0x104e4], 0x320
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856638: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x5885663B: cmp eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x31
        // 0x5885663E: ja 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x3B
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856644: movzx eax, byte ptr [eax + 0x58856ef8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0xF8
        __asm _emit 0x6E
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885664B: jmp dword ptr [eax*4 + 0x58856ea0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x6E
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58856652: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856657: cmp byte ptr [eax + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5885665B: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856661: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856667: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58856669: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x0F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5885666E: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856674: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58856676: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xF5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885667B: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856681: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58856683: call 0x5885d180
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856688: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x5885668B: pop esi
        __asm _emit 0x5E
        // 0x5885668C: pop edi
        __asm _emit 0x5F
        // 0x5885668D: pop ebp
        __asm _emit 0x5D
        // 0x5885668E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856691: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856696: cmp byte ptr [eax + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5885669A: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588566A0: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588566A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588566A8: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x0F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588566AD: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588566B3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588566B5: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xF5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588566BA: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588566C0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588566C2: call 0x5885d180
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588566C7: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x588566CA: pop esi
        __asm _emit 0x5E
        // 0x588566CB: pop edi
        __asm _emit 0x5F
        // 0x588566CC: pop ebp
        __asm _emit 0x5D
        // 0x588566CD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588566D0: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588566D5: cmp byte ptr [eax + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x588566D9: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588566DF: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588566E5: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588566E7: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x0E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588566EC: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588566F2: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588566F4: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588566F9: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588566FF: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58856701: call 0x5885d180
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856706: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856709: pop esi
        __asm _emit 0x5E
        // 0x5885670A: pop edi
        __asm _emit 0x5F
        // 0x5885670B: pop ebp
        __asm _emit 0x5D
        // 0x5885670C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885670F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856715: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885671B: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x5885671D: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x0E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856722: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856728: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x5885672A: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885672F: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856735: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58856737: call 0x5885cf90
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885673C: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856742: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58856745: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58856747: call 0x588dd2a0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x6B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885674C: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5885674F: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2A
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856755: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58856757: call 0x588dd310
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x6B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885675C: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x5885675F: pop esi
        __asm _emit 0x5E
        // 0x58856760: pop edi
        __asm _emit 0x5F
        // 0x58856761: pop ebp
        __asm _emit 0x5D
        // 0x58856762: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856765: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885676A: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856770: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x58856772: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x0E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856777: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885677D: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x5885677F: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xF4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856784: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885678A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885678C: call 0x5885cf90
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856791: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856794: pop esi
        __asm _emit 0x5E
        // 0x58856795: pop edi
        __asm _emit 0x5F
        // 0x58856796: pop ebp
        __asm _emit 0x5D
        // 0x58856797: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885679A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588567A0: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x588567A4: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588567AA: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588567AF: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588567B4: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588567B6: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xF3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588567BB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588567C1: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588567C7: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x588567C9: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x0E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588567CE: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x588567D1: pop esi
        __asm _emit 0x5E
        // 0x588567D2: pop edi
        __asm _emit 0x5F
        // 0x588567D3: pop ebp
        __asm _emit 0x5D
        // 0x588567D4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588567D7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588567DD: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x588567E1: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588567E7: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588567EC: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588567F1: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x588567F3: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xF2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588567F8: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588567FE: mov ecx, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856804: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x58856806: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x0D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5885680B: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x5885680E: pop esi
        __asm _emit 0x5E
        // 0x5885680F: pop edi
        __asm _emit 0x5F
        // 0x58856810: pop ebp
        __asm _emit 0x5D
        // 0x58856811: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856814: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885681A: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5885681E: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856824: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58856829: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885682E: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58856830: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xF2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856835: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58856837: jmp 0x58856e26
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885683C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856842: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856846: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885684C: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58856851: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856856: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58856858: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xF2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885685D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856863: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856869: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5885686B: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x0D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856870: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856873: pop esi
        __asm _emit 0x5E
        // 0x58856874: pop edi
        __asm _emit 0x5F
        // 0x58856875: pop ebp
        __asm _emit 0x5D
        // 0x58856876: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856879: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885687F: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856883: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856889: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5885688E: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856893: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58856895: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xF2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885689A: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588568A0: mov ecx, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588568A6: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588568A8: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x0D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588568AD: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x588568B0: pop esi
        __asm _emit 0x5E
        // 0x588568B1: pop edi
        __asm _emit 0x5F
        // 0x588568B2: pop ebp
        __asm _emit 0x5D
        // 0x588568B3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588568B6: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588568BC: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x588568C0: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588568C6: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588568CB: push 0x1000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588568D0: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x588568D2: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588568D7: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x588568D9: jmp 0x58856e26
        __asm _emit 0xE9
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588568DE: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588568E4: mov al, byte ptr [ecx + 0x74]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588568E7: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588568E9: je 0x58856e58
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588568EF: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588568F1: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588568F7: jmp 0x58856e58
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588568FC: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856902: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58856907: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58856909: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885690B: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xF1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856910: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856913: pop esi
        __asm _emit 0x5E
        // 0x58856914: pop edi
        __asm _emit 0x5F
        // 0x58856915: pop ebp
        __asm _emit 0x5D
        // 0x58856916: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856919: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885691F: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58856924: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58856926: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58856928: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xF1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885692D: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856930: pop esi
        __asm _emit 0x5E
        // 0x58856931: pop edi
        __asm _emit 0x5F
        // 0x58856932: pop ebp
        __asm _emit 0x5D
        // 0x58856933: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856936: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856938: jmp 0x58856c07
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885693D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856943: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x58856945: call 0x587e5c10
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xF2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885694A: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x5885694D: pop esi
        __asm _emit 0x5E
        // 0x5885694E: pop edi
        __asm _emit 0x5F
        // 0x5885694F: pop ebp
        __asm _emit 0x5D
        // 0x58856950: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856953: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856959: call 0x587ea570
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x3C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5885695E: cmp dword ptr [0x589c9068], 1
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x58856965: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885696B: jne 0x5885698a
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5885696D: call 0x587e9760
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x2D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58856972: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856978: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885697A: je 0x5885698a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885697C: call 0x587e97c0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x2E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58856981: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856984: pop esi
        __asm _emit 0x5E
        // 0x58856985: pop edi
        __asm _emit 0x5F
        // 0x58856986: pop ebp
        __asm _emit 0x5D
        // 0x58856987: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885698A: call 0x587e96b0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x2D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5885698F: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856992: pop esi
        __asm _emit 0x5E
        // 0x58856993: pop edi
        __asm _emit 0x5F
        // 0x58856994: pop ebp
        __asm _emit 0x5D
        // 0x58856995: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856998: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885699D: movzx eax, word ptr [eax + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588569A4: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588569A7: je 0x58856a40
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588569AD: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588569B0: je 0x58856a40
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588569B6: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588569BC: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588569BF: cmp word ptr [edx + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588569C7: jne 0x588569f2
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588569C9: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588569CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588569D1: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588569D3: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588569D5: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x9B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588569DA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588569DC: jle 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588569E2: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x588569E5: pop esi
        __asm _emit 0x5E
        // 0x588569E6: pop edi
        __asm _emit 0x5F
        // 0x588569E7: mov byte ptr [ebp + 0x2fc], 1
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588569EE: pop ebp
        __asm _emit 0x5D
        // 0x588569EF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588569F2: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588569F8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588569FA: mov eax, dword ptr [0x58a2836c]
        __asm _emit 0xA1
        __asm _emit 0x6C
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588569FF: add eax, 0x7d0
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856A04: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58856A06: jae 0x58856a31
        __asm _emit 0x73
        __asm _emit 0x29
        // 0x58856A08: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856A0E: mov esi, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856A14: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856A19: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856A1B: push 0x5899c8e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58856A20: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58856A26: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58856A29: push eax
        __asm _emit 0x50
        // 0x58856A2A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58856A2C: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x41
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58856A31: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856A34: pop esi
        __asm _emit 0x5E
        // 0x58856A35: mov dword ptr [0x58a2836c], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x6C
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856A3B: pop edi
        __asm _emit 0x5F
        // 0x58856A3C: pop ebp
        __asm _emit 0x5D
        // 0x58856A3D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856A40: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856A46: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58856A49: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856A4F: movzx eax, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58856A53: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58856A56: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58856A59: je 0x58856a6e
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58856A5B: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58856A5E: je 0x58856a6e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58856A60: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58856A63: je 0x58856a6e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58856A65: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58856A68: jne 0x588569e2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58856A6E: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856A74: mov esi, dword ptr [edx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856A7A: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856A7F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856A81: push 0x5899e934
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58856A86: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58856A8C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58856A8F: push eax
        __asm _emit 0x50
        // 0x58856A90: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58856A92: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58856A97: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856A9A: pop esi
        __asm _emit 0x5E
        // 0x58856A9B: pop edi
        __asm _emit 0x5F
        // 0x58856A9C: pop ebp
        __asm _emit 0x5D
        // 0x58856A9D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856AA0: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856AA5: cmp dword ptr [eax + 0x20d5c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AAC: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AB2: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856AB8: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58856ABB: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AC1: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58856AC5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58856AC7: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58856ACA: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58856ACE: je 0x58856aec
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58856AD0: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58856AD4: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856ADA: and ecx, 0x3e0
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AE0: cmp ecx, 0x160
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AE6: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AEC: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856AF1: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AF7: call 0x5885fdc0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856AFC: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856AFF: pop esi
        __asm _emit 0x5E
        // 0x58856B00: pop edi
        __asm _emit 0x5F
        // 0x58856B01: pop ebp
        __asm _emit 0x5D
        // 0x58856B02: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856B05: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856B0B: cmp dword ptr [ecx + 0x20d5c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B12: jne 0x58856b43
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58856B14: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856B1A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58856B1D: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B23: mov al, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58856B26: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58856B28: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x58856B2A: jne 0x58856b43
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58856B2C: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856B32: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B38: call 0x5885fe90
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B3D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856B43: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58856B46: add eax, -0x22
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xDE
        // 0x58856B49: cmp eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x53
        // 0x58856B4C: ja 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x2D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B52: movzx edx, byte ptr [eax + 0x58856f44]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x6F
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58856B59: jmp dword ptr [edx*4 + 0x58856f2c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2C
        __asm _emit 0x6F
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58856B60: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856B64: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B6A: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58856B6F: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B74: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58856B76: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xEF
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856B7B: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58856B7D: jmp 0x58856e26
        __asm _emit 0xE9
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B82: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856B86: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856B8C: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856B92: call 0x587a71e0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856B97: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856B9A: pop esi
        __asm _emit 0x5E
        // 0x58856B9B: pop edi
        __asm _emit 0x5F
        // 0x58856B9C: pop ebp
        __asm _emit 0x5D
        // 0x58856B9D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856BA0: mov dword ptr [0x58a28370], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856BAA: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x58856BAD: cmp eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x31
        // 0x58856BB0: ja 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xC9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856BB6: movzx ecx, byte ptr [eax + 0x58856fc4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0xC4
        __asm _emit 0x6F
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58856BBD: jmp dword ptr [ecx*4 + 0x58856f98]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x98
        __asm _emit 0x6F
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58856BC4: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856BCA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856BCC: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58856BCE: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58856BD0: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xEE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856BD5: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856BD8: pop esi
        __asm _emit 0x5E
        // 0x58856BD9: pop edi
        __asm _emit 0x5F
        // 0x58856BDA: pop ebp
        __asm _emit 0x5D
        // 0x58856BDB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856BDE: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856BE4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856BE6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58856BE8: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58856BEA: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xEE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856BEF: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856BF2: pop esi
        __asm _emit 0x5E
        // 0x58856BF3: pop edi
        __asm _emit 0x5F
        // 0x58856BF4: pop ebp
        __asm _emit 0x5D
        // 0x58856BF5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856BF8: mov dword ptr [0x58a28370], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C02: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58856C07: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856C0D: push 0x2000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C12: push 0x1c
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x58856C14: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xEE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856C19: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856C1C: pop esi
        __asm _emit 0x5E
        // 0x58856C1D: pop edi
        __asm _emit 0x5F
        // 0x58856C1E: pop ebp
        __asm _emit 0x5D
        // 0x58856C1F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856C22: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856C28: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856C2C: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C32: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856C34: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C39: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x58856C3B: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xEE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856C40: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856C46: mov ecx, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856C4C: push 0x29
        __asm _emit 0x6A
        __asm _emit 0x29
        // 0x58856C4E: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x09
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856C53: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856C56: pop esi
        __asm _emit 0x5E
        // 0x58856C57: pop edi
        __asm _emit 0x5F
        // 0x58856C58: pop ebp
        __asm _emit 0x5D
        // 0x58856C59: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856C5C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856C62: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856C66: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C6C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856C6E: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C73: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x58856C75: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xEE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856C7A: push 0x2a
        __asm _emit 0x6A
        __asm _emit 0x2A
        // 0x58856C7C: jmp 0x58856e26
        __asm _emit 0xE9
        __asm _emit 0xA5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C81: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856C87: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856C8B: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856C93: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856C98: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58856C9A: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xEE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856C9F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856CA5: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856CAB: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x58856CAD: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x09
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856CB2: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856CB5: pop esi
        __asm _emit 0x5E
        // 0x58856CB6: pop edi
        __asm _emit 0x5F
        // 0x58856CB7: pop ebp
        __asm _emit 0x5D
        // 0x58856CB8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856CBB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856CC1: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856CC5: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856CCB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856CCD: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856CD2: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58856CD4: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xED
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856CD9: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856CDF: mov ecx, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856CE5: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x58856CE7: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x08
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856CEC: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856CEF: pop esi
        __asm _emit 0x5E
        // 0x58856CF0: pop edi
        __asm _emit 0x5F
        // 0x58856CF1: pop ebp
        __asm _emit 0x5D
        // 0x58856CF2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856CF5: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856CFB: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856CFF: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D05: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856D07: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D0C: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58856D0E: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xED
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856D13: push 0x25
        __asm _emit 0x6A
        __asm _emit 0x25
        // 0x58856D15: jmp 0x58856e26
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D1A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856D20: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856D24: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D2A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856D2C: push 0x1000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D31: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58856D33: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xED
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856D38: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856D3E: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856D44: push 0x26
        __asm _emit 0x6A
        __asm _emit 0x26
        // 0x58856D46: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856D4B: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856D4E: pop esi
        __asm _emit 0x5E
        // 0x58856D4F: pop edi
        __asm _emit 0x5F
        // 0x58856D50: pop ebp
        __asm _emit 0x5D
        // 0x58856D51: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856D54: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58856D57: add eax, -0x22
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xDE
        // 0x58856D5A: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x58856D5D: ja 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D63: movzx edx, byte ptr [eax + 0x5885700c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x70
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58856D6A: jmp dword ptr [edx*4 + 0x58856ff8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0x6F
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x58856D71: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856D77: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856D7B: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D81: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856D83: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D88: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58856D8A: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xED
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856D8F: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x58856D91: jmp 0x58856e26
        __asm _emit 0xE9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856D96: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856D9C: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856DA0: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856DA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856DA8: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856DAD: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58856DAF: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xED
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856DB4: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856DBA: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856DC0: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x58856DC2: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856DC7: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856DCA: pop esi
        __asm _emit 0x5E
        // 0x58856DCB: pop edi
        __asm _emit 0x5F
        // 0x58856DCC: pop ebp
        __asm _emit 0x5D
        // 0x58856DCD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856DD0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856DD6: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856DDA: jne 0x58856e7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856DE0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856DE2: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856DE7: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58856DE9: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xEC
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856DEE: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856DF4: mov ecx, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856DFA: push 0x25
        __asm _emit 0x6A
        __asm _emit 0x25
        // 0x58856DFC: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x07
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856E01: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856E04: pop esi
        __asm _emit 0x5E
        // 0x58856E05: pop edi
        __asm _emit 0x5F
        // 0x58856E06: pop ebp
        __asm _emit 0x5D
        // 0x58856E07: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856E0A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856E10: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58856E14: jne 0x58856e7f
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x58856E16: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58856E18: push 0x1000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856E1D: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58856E1F: call 0x587e5ac0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xEC
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58856E24: push 0x26
        __asm _emit 0x6A
        __asm _emit 0x26
        // 0x58856E26: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856E2B: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58856E31: call 0x587a75e0
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x07
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58856E36: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856E39: pop esi
        __asm _emit 0x5E
        // 0x58856E3A: pop edi
        __asm _emit 0x5F
        // 0x58856E3B: pop ebp
        __asm _emit 0x5D
        // 0x58856E3C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856E3F: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856E45: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58856E48: push ecx
        __asm _emit 0x51
        // 0x58856E49: mov ecx, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58856E4F: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xA6
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58856E54: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58856E56: je 0x58856e7f
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58856E58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58856E5E: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58856E61: call 0x588dd2a0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58856E66: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58856E68: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58856E6A: jne 0x58856e7a
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58856E6C: call 0x58853b90
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58856E71: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856E74: pop esi
        __asm _emit 0x5E
        // 0x58856E75: pop edi
        __asm _emit 0x5F
        // 0x58856E76: pop ebp
        __asm _emit 0x5D
        // 0x58856E77: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58856E7A: call 0x58854390
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58856E7F: pop esi
        __asm _emit 0x5E
        // 0x58856E80: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x58856E83: pop edi
        __asm _emit 0x5F
        // 0x58856E84: pop ebp
        __asm _emit 0x5D
        // 0x58856E85: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
