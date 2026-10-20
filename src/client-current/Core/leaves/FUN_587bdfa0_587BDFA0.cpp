// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BDFA0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_587bdfa0_587BDFA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 88 CC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x88
        __asm _emit 0xcc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588be22ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 3b9aca00h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
