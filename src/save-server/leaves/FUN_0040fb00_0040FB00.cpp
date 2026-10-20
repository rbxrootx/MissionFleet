// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FB00 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0040fb00_0040FB00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 40cb0h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 3efh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 40cb0h]
        add eax, 1
        mov ecx, dword ptr [edx + 40cb4h]
        adc ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 5ch]
        mov dword ptr [edx + 40cb0h], eax
        mov dword ptr [edx + 40cb4h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 64 0C 00: call 0x4d5ff7
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 7A 52 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
