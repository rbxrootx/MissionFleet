// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AF98 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0054af98_0054AF98() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 4fh
        push 678970h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B1 F2 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [ecx + 20h], 0
        setne al
        mov esp, ebp
        pop ebp
        ret
    }
}
