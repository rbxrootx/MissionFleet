// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507723 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_00507723_00507723() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0ah
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        ; Exact mapped bytes E8 6F 98 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8A 35 FF FF: call 0x4faccf
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x35
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
