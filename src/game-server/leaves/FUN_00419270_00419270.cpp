// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419270 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00419270_00419270() {
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
        ; Exact mapped bytes E8 7F 11 00 00: call 0x41a420
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], 581140h
        mov eax, dword ptr [ebp - 0ch]
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 29 F5 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
