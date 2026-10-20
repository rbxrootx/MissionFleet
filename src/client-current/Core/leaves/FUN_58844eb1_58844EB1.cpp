// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844EB1 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_58844eb1_58844EB1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 19 00 00: call 0x58846894
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 14h], 3fffffffh
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        shr eax, 1
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, eax
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 06: jae 0x58844f11
        __asm _emit 0x73
        __asm _emit 0x06
        and dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 0B: jmp 0x58844f1c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        shr eax, 1
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 06: jae 0x58844f30
        __asm _emit 0x73
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
