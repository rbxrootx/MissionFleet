// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00473B80 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00473b80_00473B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 6F 68 FA FF: call 0x41a420
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], 581cb4h
        mov eax, dword ptr [ebp - 0ch]
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 19 4C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
