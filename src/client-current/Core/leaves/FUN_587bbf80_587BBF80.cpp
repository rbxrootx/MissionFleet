// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BBF80 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_587bbf80_587BBF80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 40h
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 89 FF FF: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588bdff8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [edx + 54h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
