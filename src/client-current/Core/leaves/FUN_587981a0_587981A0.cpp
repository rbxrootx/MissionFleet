// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587981A0 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_587981a0_587981A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889157dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        mov dword ptr [ebp - 14h], eax
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x58798280
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 10h
        mov dword ptr [ebp - 20h], eax
        push 30h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E8 0A 8E 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        mov dword ptr [ebp - 1ch], ebx
        lea esi, [ebx + 10h]
        push edi
        mov ecx, esi
        mov dword ptr [ebp - 18h], esi
        ; Exact mapped bytes E8 40 05 00 00: call 0x58798750
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + 8]
        mov byte ptr [ebp - 4], 1
        push eax
        lea ecx, [esi + 8]
        ; Exact mapped bytes E8 30 08 00 00: call 0x58798a50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 14h]
        mov dword ptr [ebx], eax
        mov dword ptr [ebx + 8], eax
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 43 0C 00 00: mov word ptr [ebx + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 4], eax
        mov al, byte ptr [edi + 0ch]
        mov byte ptr [ebx + 0ch], al
        mov dword ptr [ebp - 24h], esi
        mov dword ptr [ebp - 20h], esi
        mov dword ptr [ebp - 1ch], ebx
        push ebx
        push dword ptr [edi]
        mov ecx, esi
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes E8 46 FF FF FF: call 0x587981a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        mov dword ptr [ebx], eax
        mov ecx, esi
        push dword ptr [edi + 8]
        ; Exact mapped bytes E8 39 FF FF FF: call 0x587981a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 8], eax
        mov eax, ebx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
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
