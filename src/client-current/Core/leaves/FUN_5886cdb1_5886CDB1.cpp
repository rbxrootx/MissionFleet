// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CDB1 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_5886cdb1_5886CDB1() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push 0
        ; Exact mapped bytes E8 DB 3E FE FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 00 00 00: call 0x5886cde1
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 0B 3F FE FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
