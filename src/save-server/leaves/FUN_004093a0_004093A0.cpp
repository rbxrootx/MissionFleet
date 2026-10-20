// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004093A0 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_004093a0_004093A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58a98fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 27 B9 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 633114h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x4094fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10110h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10108h]
        push eax
        ; Exact mapped bytes FF 15 E8 B7 68 00: call dword ptr [0x68b7e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D3 B9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 6E: je 0x40948f
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10110h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 64 37 0C 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0x00
        push 633110h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 A9 3B 0C 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 97 3B 0C 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 2A 3C 0C 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 63310ch
        mov eax, dword ptr [ebp - 10h]
        add eax, 10110h
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 61 B9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10110h
        push ecx
        ; Exact mapped bytes FF 15 D8 B7 68 00: call dword ptr [0x68b7d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 46 B9 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 4B: je 0x4094fb
        __asm _emit 0x74
        __asm _emit 0x4b
        push 633110h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 32 3B 0C 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 20 3B 0C 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1010ch
        ; Exact mapped bytes E8 A6 3B 0C 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 7C FF FF: call 0x401104
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 D4 B8 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
