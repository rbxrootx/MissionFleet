// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578CD8 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00578cd8_00578CD8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 02: jne 0x578cec
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5B: jmp 0x578d47
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B2 10 FC FF: call 0x539da6
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 6
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 75 02: jne 0x578d02
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 45: jmp 0x578d47
        __asm _emit 0xeb
        __asm _emit 0x45
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 08: jne 0x578d10
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        neg ecx
        mov dword ptr [ebp + 8], ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C1 F9 FB FF: call 0x5386dd
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 B4 20 5E 00: call dword ptr [0x5e20b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
