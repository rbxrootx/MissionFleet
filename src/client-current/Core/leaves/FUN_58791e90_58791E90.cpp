// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791E90 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_58791e90_58791E90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 4], 1
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + ecx + 8], eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        imul edx, ecx, 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 0ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
