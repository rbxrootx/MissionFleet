// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58564250 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58564250_58564250() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 55555555h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 27 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], eax
        ; Exact mapped bytes 75 20: jne 0x585642a7
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 104h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 9B FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 158h]
        xor eax, 55555555h
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 02 00 00: call 0x585644e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
