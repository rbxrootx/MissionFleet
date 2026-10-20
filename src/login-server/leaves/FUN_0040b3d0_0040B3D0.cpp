// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B3D0 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_0040b3d0_0040B3D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439dd8h
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
        push 0
        push -1
        push -1
        push -1
        push 0
        push 10060000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 29 49 00 00: call 0x40fd30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 1000h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0e4h
        ; Exact mapped bytes E8 8F 0E 00 00: call 0x40c2b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10ch
        ; Exact mapped bytes E8 7D 8E FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43cef8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 100h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 108h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1b8h], 0
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
