// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C4B9 .. +0x1E1 bytes.
extern "C" __declspec(naked) void FUN_0056c4b9_0056C4B9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 582h
        push 5d053ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 8B EC F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E8 26 90 FC FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x56c5c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 26 56 F8 FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x56
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 5A 55 F8 FF: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0e0h], 0
        ; Exact mapped bytes 74 1D: je 0x56c539
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 FD 55 F8 FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 31 55 F8 FF: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 E5 FB FF: call 0x52aae9
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 34 01 00 00: call dword ptr [eax + 0x134]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        push 0
        push 1
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 16 F6 FC FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x56c694
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0A: jne 0x56c5dd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 02 E5 FB FF: call 0x52aae9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 34 01 00 00: call dword ptr [eax + 0x134]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6E FD FB FF: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 18: je 0x56c646
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 85 F5 FC FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 C5 54 F8 FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [edx + 1ch], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 74 1A: je 0x56c694
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 9F 54 F8 FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0e0h]
        mov dword ptr [ecx + 1ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
