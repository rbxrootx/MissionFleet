// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EB880 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_586eb880_586EB880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5D C6 D9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc6
        __asm _emit 0xd9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 67 90 E1 FF: call 0x58504920
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x90
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        imul eax, dword ptr [ebp + 8], 18h
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
