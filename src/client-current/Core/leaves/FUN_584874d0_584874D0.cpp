// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584874D0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_584874d0_584874D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp - 2]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D4 F7 FF FF: call 0x58486cc0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        xor eax, eax
        mov byte ptr [ebp - 1], al
        lea ecx, [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 08 00 00: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
