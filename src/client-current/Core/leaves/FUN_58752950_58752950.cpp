// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752950 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_58752950_58752950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587529bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 48: jge 0x58752a09
        __asm _emit 0x7d
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 30h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0b0h]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        ; Exact mapped bytes EB A9: jmp 0x587529b2
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov esp, ebp
        pop ebp
        ret
    }
}
