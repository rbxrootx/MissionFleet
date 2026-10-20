// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005568DA .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_005568da_005568DA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 134h
        push 67c1ech
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6C 39 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
