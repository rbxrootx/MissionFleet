// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004947F4 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_004947f4_004947F4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0bch
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 44 15 0A 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 55 17 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 D7 78 0A 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 80 15 0A 00: call 0x535db0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ch], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 15 17 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 09 17 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
