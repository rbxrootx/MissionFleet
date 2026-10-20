// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502940 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58502940_58502940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        xor eax, eax
        mov byte ptr [ebp - 1], al
        lea ecx, [ebp - 1]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 BC F9 F9 FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A4 55 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 37 03 00 00: call 0x58502cb0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 37 44 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 24 44 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 81 55 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
