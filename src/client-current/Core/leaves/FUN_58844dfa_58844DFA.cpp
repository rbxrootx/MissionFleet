// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844DFA .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58844dfa_58844DFA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], eax
        push 60h
        push 1
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 54 FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
