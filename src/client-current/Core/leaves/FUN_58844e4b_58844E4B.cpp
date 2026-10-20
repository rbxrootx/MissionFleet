// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844E4B .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_58844e4b_58844E4B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], eax
        push 60h
        push 1
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 54 FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0x04
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
