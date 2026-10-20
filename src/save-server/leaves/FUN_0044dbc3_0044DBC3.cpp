// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044DBC3 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0044dbc3_0044DBC3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 30 46 0E 00: call 0x532208
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x46
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6E 42 0E 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x42
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 BA 3F 0E 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1E 47 0E 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D6 46 0E 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x0e
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
        ; Exact mapped bytes E8 06 00 00 00: call 0x44dc48
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
