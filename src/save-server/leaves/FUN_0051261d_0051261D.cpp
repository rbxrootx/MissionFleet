// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051261D .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_0051261d_0051261D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 46: je 0x512679
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes E8 7A F4 01 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 80 BC 68 00: call dword ptr [0x68bc80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 27: jne 0x512679
        __asm _emit 0x75
        __asm _emit 0x27
        push 673dfch
        push 673e2ch
        ; Exact mapped bytes E8 B4 DF F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdf
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x512709
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0ach
        ; Exact mapped bytes E8 12 A5 FB FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 11 8F 01 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx + 0ch]
        sub eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 DD FB FF: call 0x4d040c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x512704
        __asm _emit 0x75
        __asm _emit 0x26
        push 673e30h
        push 673e58h
        ; Exact mapped bytes E8 28 DF F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x512700
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 5C BC 68 00: call dword ptr [0x68bc5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x512709
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
