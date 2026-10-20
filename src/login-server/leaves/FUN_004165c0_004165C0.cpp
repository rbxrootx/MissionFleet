// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004165C0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_004165c0_004165C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 8B 57 3C: mov edx, dword ptr [edi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 58 FF: lea ebx, [eax - 1]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 8A 44 0A FC: mov al, byte ptr [edx + ecx - 4]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0xfc
        ; Exact mapped bytes 8D 74 0A F0: lea esi, [edx + ecx - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 CD E6 FF FF: call 0x414cb5
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 25 E7 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 36: jne 0x41662a
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 24: je 0x416620
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 74 1F: je 0x416620
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 1A: je 0x416620
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 15: je 0x416620
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 10: je 0x416620
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 75 14: push dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes E8 78 01 00 00: call 0x416796
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x416630
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 75 14: push dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes EB EF: jmp 0x416619
        __asm _emit 0xeb
        __asm _emit 0xef
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 08 FF: or dword ptr [eax], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
