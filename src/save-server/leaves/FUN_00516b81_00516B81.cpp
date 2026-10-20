// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516B81 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_00516b81_00516B81() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d4f8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 86 FB FF: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 C9 81 FA FF: call 0x4bed80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 78h
        ; Exact mapped bytes E8 41 E1 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 637b18h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5A 02 00 00: call 0x516e39
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
