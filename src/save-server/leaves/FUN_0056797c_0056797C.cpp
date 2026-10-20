// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056797C .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_0056797c_0056797C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7A: je 0x567a16
        __asm _emit 0x74
        __asm _emit 0x7a
        lea eax, [ebp - 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x567a16
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x5679cb
        __asm _emit 0x75
        __asm _emit 0x14
        push 174h
        push 67aea0h
        ; Exact mapped bytes E8 7A 13 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5679cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5679b1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 4C BB 68 00: call dword ptr [0x68bb4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 4C BB 68 00: call dword ptr [0x68bb4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 1F: jne 0x567a0c
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 D2 24 F0 FF: call 0x469ed0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x567a0c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
