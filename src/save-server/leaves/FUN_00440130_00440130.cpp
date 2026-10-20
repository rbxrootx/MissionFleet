// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440130 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00440130_00440130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 08: jne 0x440163
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 22: jmp 0x440185
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 14h]
        sub edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 E9 5A 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 14h]
        sub edx, dword ptr [ebp - 4]
        add eax, edx
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
