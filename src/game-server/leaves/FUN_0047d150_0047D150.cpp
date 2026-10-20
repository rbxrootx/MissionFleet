// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D150 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0047d150_0047D150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D F9 FF FF: call 0x47cad0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 63 B6 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
