// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 533 bytes in 4 exact ranges.
// Source symbol alias: FUN_587cd000.

// Ghidra body range 0x587CD000..0x587CD01A; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd000_segment_00() {
    __asm {
        // 0x587CD000: push ebx
        __asm _emit 0x53
        // 0x587CD001: push ebp
        __asm _emit 0x55
        // 0x587CD002: push esi
        __asm _emit 0x56
        // 0x587CD003: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CD005: inc byte ptr [esi + 0xd]
        __asm _emit 0xFE
        __asm _emit 0x46
        __asm _emit 0x0D
        // 0x587CD008: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587CD00B: push edi
        __asm _emit 0x57
        // 0x587CD00C: mov edi, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x587CD00F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587CD011: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587CD014: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD016: je 0x587cd051
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x587CD018: jmp 0x587cd020
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587CD020..0x587CD05A; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd000_segment_01() {
    __asm {
        // 0x587CD020: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587CD023: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587CD025: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x5B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD02A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587CD02C: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD031: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587CD034: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD036: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD038: push ebp
        __asm _emit 0x55
        // 0x587CD039: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD03B: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587CD03E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587CD040: je 0x587cd04a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587CD042: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD044: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD046: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD048: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD04A: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CD04D: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD04F: jne 0x587cd020
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x587CD051: mov edi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587CD054: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD056: je 0x587cd091
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x587CD058: jmp 0x587cd060
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587CD060..0x587CD09D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd000_segment_02() {
    __asm {
        // 0x587CD060: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587CD063: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587CD065: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x5B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD06A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587CD06C: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x5B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD071: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587CD074: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD076: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD078: push ebp
        __asm _emit 0x55
        // 0x587CD079: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD07B: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587CD07E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587CD080: je 0x587cd08a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587CD082: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD084: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD086: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD088: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD08A: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CD08D: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD08F: jne 0x587cd060
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x587CD091: mov edi, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD097: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD099: je 0x587cd0d1
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587CD09B: jmp 0x587cd0a0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587CD0A0..0x587CD224; 388 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd000_segment_03() {
    __asm {
        // 0x587CD0A0: mov ebx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x587CD0A3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587CD0A5: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x5B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD0AA: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587CD0AC: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x5B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD0B1: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587CD0B4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD0B6: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD0B8: push ebp
        __asm _emit 0x55
        // 0x587CD0B9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD0BB: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x587CD0BE: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587CD0C0: je 0x587cd0ca
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587CD0C2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD0C4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD0C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD0C8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD0CA: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CD0CD: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD0CF: jne 0x587cd0a0
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x587CD0D1: mov edi, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x587CD0D4: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD0D6: je 0x587cd0e9
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CD0D8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD0DA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD0DC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD0DE: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CD0E1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD0E3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD0E5: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD0E7: jne 0x587cd0d8
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CD0E9: mov dword ptr [esi + 0x6c], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x6C
        // 0x587CD0EC: mov dword ptr [esi + 0x68], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x68
        // 0x587CD0EF: mov dword ptr [esi + 0x70], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x587CD0F2: mov edi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587CD0F5: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD0F7: je 0x587cd111
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587CD0F9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD100: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD102: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD104: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD106: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CD109: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD10B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD10D: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD10F: jne 0x587cd100
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CD111: mov dword ptr [esi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x7C
        // 0x587CD114: mov dword ptr [esi + 0x78], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x78
        // 0x587CD117: mov dword ptr [esi + 0x80], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD11D: mov edi, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD123: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD125: je 0x587cd138
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CD127: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD129: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD12B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD12D: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CD130: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD132: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD134: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD136: jne 0x587cd127
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CD138: mov dword ptr [esi + 0x8c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD13E: mov dword ptr [esi + 0x88], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD144: mov dword ptr [esi + 0x90], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD14A: mov edi, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD150: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD152: je 0x587cd165
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CD154: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD156: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587CD158: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587CD15A: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587CD15D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CD15F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587CD161: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD163: jne 0x587cd154
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587CD165: mov dword ptr [esi + 0x9c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD16B: mov dword ptr [esi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD171: mov dword ptr [esi + 0xa0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD177: mov al, byte ptr [esi + 0xd]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x0D
        // 0x587CD17A: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587CD17C: jbe 0x587cd215
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD182: cmp al, byte ptr [esi + 0xc]
        __asm _emit 0x3A
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587CD185: ja 0x587cd215
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD18B: mov edi, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x587CD18E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD190: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD195: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD197: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x5A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD19C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD1A2: call 0x58800fd0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x3E
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587CD1A7: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD1AD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CD1B0: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD1B5: mov ecx, dword ptr [eax + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD1BB: push edx
        __asm _emit 0x52
        // 0x587CD1BC: call 0x58896200
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587CD1C1: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD1C7: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CD1CD: mov ebx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587CD1D0: push ebx
        __asm _emit 0x53
        // 0x587CD1D1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD1D3: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x5D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD1D8: push ebx
        __asm _emit 0x53
        // 0x587CD1D9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD1DB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x5D
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD1E0: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD1E6: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x587CD1E9: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD1EB: je 0x587cd215
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CD1ED: mov ebx, 0x2710
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD1F2: cmp dword ptr [edi + 0x664c], ebx
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD1F8: je 0x587cd208
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CD1FA: push ebp
        __asm _emit 0x55
        // 0x587CD1FB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CD1FD: mov dword ptr [edi + 0x664c], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD203: call 0x588deb30
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587CD208: mov dword ptr [edi + 0x6648], ebp
        __asm _emit 0x89
        __asm _emit 0xAF
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD20E: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587CD211: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587CD213: jne 0x587cd1f2
        __asm _emit 0x75
        __asm _emit 0xDD
        // 0x587CD215: movzx eax, byte ptr [esi + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0D
        // 0x587CD219: cmp byte ptr [esi + 0xc], al
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587CD21C: pop edi
        __asm _emit 0x5F
        // 0x587CD21D: pop esi
        __asm _emit 0x5E
        // 0x587CD21E: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587CD220: pop ebp
        __asm _emit 0x5D
        // 0x587CD221: inc eax
        __asm _emit 0x40
        // 0x587CD222: pop ebx
        __asm _emit 0x5B
        // 0x587CD223: ret
        __asm _emit 0xC3
    }
}
