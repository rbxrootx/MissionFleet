// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005451A5 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_005451a5_005451A5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d2f0h
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
        ; Exact mapped bytes E8 57 D5 FF FF: call 0x542720
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 63 04 00 00: call 0x545640
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58487ch
        push 54h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 5D 9D F4 FF: call 0x48ef50
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 28h], 4ed38ch
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
