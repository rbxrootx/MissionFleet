// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE7B0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_585ee7b0_585EE7B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD 95 E9 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B 97 E9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 75 AC FC FF: call 0x585b9480
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
