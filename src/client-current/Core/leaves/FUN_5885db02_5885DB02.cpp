// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DB02 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5885db02_5885DB02() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 10h]
        mov ebx, ecx
        push edi
        push dword ptr [ebp + 14h]
        mov edi, dword ptr [ebp + 0ch]
        mov dword ptr [ebx], edi
        lea ecx, [ebx + 10h]
        mov dword ptr [ebx + 4], esi
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        push esi
        push edi
        mov dword ptr [ebx + 8], edx
        mov dword ptr [ebx + 0ch], eax
        ; Exact mapped bytes E8 18 FF FF FF: call 0x5885da4a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 18h]
        and dword ptr [ebx + 68h], 0
        mov dword ptr [ebx + 60h], eax
        mov eax, dword ptr [ebp + 1ch]
        pop edi
        mov dword ptr [ebx + 64h], eax
        mov eax, ebx
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
