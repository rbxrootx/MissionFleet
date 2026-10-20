// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588467D4 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_588467d4_588467D4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        push dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 15 C4 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
