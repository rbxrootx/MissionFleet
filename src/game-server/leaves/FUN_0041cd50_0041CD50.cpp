// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CD50 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_0041cd50_0041CD50() {
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
        ; Exact mapped bytes E8 CF 1C 00 00: call 0x41ea50
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], 581144h
        mov eax, dword ptr [ebp - 0ch]
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 49 BA 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xba
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
