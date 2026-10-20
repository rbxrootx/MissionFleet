// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857FE10 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5857fe10_5857FE10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B1 FF FF FF: call 0x5857fde0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
