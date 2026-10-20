// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855BEA0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_5855bea0_5855BEA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        push 0ch
        ; Exact mapped bytes E8 54 51 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x51
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        push 0ch
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 47 0F 2F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1ch
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 25 C3 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
