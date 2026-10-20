// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798F50 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58798f50_58798F50() {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0ch]
        mov dword ptr [esi], 588b6c94h
        ; Exact mapped bytes E8 7F 15 D1 FF: call 0x584aa4e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x15
        __asm _emit 0xd1
        __asm _emit 0xff
        lea eax, [esi + 4]
        mov dword ptr [esi], 58894ccch
        push eax
        ; Exact mapped bytes E8 53 44 0B 00: call 0x5884d3c3
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x44
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        pop esi
        ret
    }
}
