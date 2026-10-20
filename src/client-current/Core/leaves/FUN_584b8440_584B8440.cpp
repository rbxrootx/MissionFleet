// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8440 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_584b8440_584B8440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 31 EE FC FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 22 EE FC FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 13 EE FC FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 EE 43 39 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x43
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov esp, ebp
        pop ebp
        ret
    }
}
