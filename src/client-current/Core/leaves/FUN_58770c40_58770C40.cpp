// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770C40 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58770c40_58770C40() {
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
        ; Exact mapped bytes E8 AC 5B D1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588b54b0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 58h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
