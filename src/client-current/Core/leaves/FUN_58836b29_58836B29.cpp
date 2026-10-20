// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836B29 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58836b29_58836B29() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1004h
        ; Exact mapped bytes E8 BA AF FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push 1000h
        lea eax, [ebp - 1004h]
        push 0
        push eax
        ; Exact mapped bytes E8 BD 62 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp + 0ch]
        push eax
        push 0
        push dword ptr [ebp + 8]
        lea eax, [ebp - 1004h]
        push -1
        push eax
        ; Exact mapped bytes E8 F6 A9 C7 FF: call 0x584b1560
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa9
        __asm _emit 0xc7
        __asm _emit 0xff
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x58836b88
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [ebp - 1004h]
        add eax, 28h
        push ecx
        push eax
        ; Exact mapped bytes E8 04 35 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 BE A4 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
