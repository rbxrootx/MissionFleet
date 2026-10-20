// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8930 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_586c8930_586C8930() {
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
        ; Exact mapped bytes E8 AD F5 DB FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xdb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 87 F5 FE FF: call 0x586b7ef0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        imul eax, dword ptr [ebp + 8], 22h
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
