// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049159E .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0049159e_0049159E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 DF 47 0A 00: call 0x535d92
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x47
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A0 43 0A 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x43
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 6F 40 0A 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 DC 48 0A 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 85 48 0A 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 06 00 00 00: call 0x491623
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
