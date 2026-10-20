// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8352 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004f8352_004F8352() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 76 14: jbe 0x4f8375
        __asm _emit 0x76
        __asm _emit 0x14
        push 240h
        push 672eech
        ; Exact mapped bytes E8 D0 09 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8375
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4f8359
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 35: jne 0x4f83b8
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 08: ja 0x4f8393
        __asm _emit 0x77
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 25: jae 0x4f83b8
        __asm _emit 0x73
        __asm _emit 0x25
        push -0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 673124h
        ; Exact mapped bytes E8 62 82 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 30: jmp 0x4f83e8
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        push 407h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 1
        push 407h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
