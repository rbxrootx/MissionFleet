// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437C70 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00437c70_00437C70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 76 0D: jbe 0x437c96
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 0D E1 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 08: jae 0x437cb7
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 06: jmp 0x437cbd
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 10h], al
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 88 FE 00 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
