// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F44A .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_0055f44a_0055F44A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 2edh
        push 5cff18h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F7 BC F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        push 2eeh
        push 5cff18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E4 BC F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 CD 09 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55f4a1
        __asm _emit 0x75
        __asm _emit 0x14
        push 2efh
        push 5cff18h
        ; Exact mapped bytes E8 64 55 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f4a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55f47c
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F4 88 FF FF: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 25 FE FF: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x55f4e7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1A: jmp 0x55f501
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 BB FD FF: call 0x53b08c
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 39 E1 FE FF: call 0x54d63a
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
