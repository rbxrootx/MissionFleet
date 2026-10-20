// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E4DD .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_5883e4dd_5883E4DD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 420h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 420h]
        push 0
        push eax
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 420h], 10h
        push eax
        push 2
        push dword ptr [ecx + 48h]
        ; Exact mapped bytes FF 15 18 40 89 58: call dword ptr [0x58894018]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5883e51e
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 35: jmp 0x5883e553
        __asm _emit 0xeb
        __asm _emit 0x35
        push 0bh
        lea eax, [ebp - 0fh]
        push 0
        push eax
        ; Exact mapped bytes E8 E5 E8 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 41ch]
        push 10h
        push eax
        ; Exact mapped bytes E8 DC 07 00 00: call 0x5883ed19
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push esi
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 41ch]
        push eax
        ; Exact mapped bytes E8 2F 04 00 00: call 0x5883e97d
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        mov al, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 F2 2A FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
