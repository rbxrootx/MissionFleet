// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00531D1A .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00531d1a_00531D1A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 2
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes 76 1C: jbe 0x531d4e
        __asm _emit 0x76
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 24h]
        mov eax, 2
        sub eax, edx
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 3C FD FF: call 0x505974
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 0A: mov cx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        add eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
