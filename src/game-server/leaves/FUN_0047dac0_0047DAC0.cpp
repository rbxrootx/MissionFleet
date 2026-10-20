// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DAC0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0047dac0_0047DAC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 32 F9 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 FC AC 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
