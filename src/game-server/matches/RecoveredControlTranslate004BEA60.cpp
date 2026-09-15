// Exact recovered control-word translator.
extern "C" __declspec(naked) void Recovered004BEA60()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov dword ptr [ebp-4], 0
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 0ffffh
    __asm and eax, 1
    __asm test eax, eax
    __asm je b4
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ecx, 10h
    __asm mov dword ptr [ebp-4], ecx
    __asm b4:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 0ffffh
    __asm and edx, 4
    __asm test edx, edx
    __asm je b8
    __asm mov eax, dword ptr [ebp-4]
    __asm or al, 8
    __asm mov dword ptr [ebp-4], eax
    __asm b8:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 0ffffh
    __asm and ecx, 8
    __asm test ecx, ecx
    __asm je b10
    __asm mov edx, dword ptr [ebp-4]
    __asm or edx, 4
    __asm mov dword ptr [ebp-4], edx
    __asm b10:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 0ffffh
    __asm and eax, 10h
    __asm test eax, eax
    __asm je b20
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ecx, 2
    __asm mov dword ptr [ebp-4], ecx
    __asm b20:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 0ffffh
    __asm and edx, 20h
    __asm test edx, edx
    __asm je b2
    __asm mov eax, dword ptr [ebp-4]
    __asm or al, 1
    __asm mov dword ptr [ebp-4], eax
    __asm b2:
    __asm mov ecx, dword ptr [ebp+8]
    __asm and ecx, 0ffffh
    __asm and ecx, 2
    __asm test ecx, ecx
    __asm je groupc
    __asm mov edx, dword ptr [ebp-4]
    __asm or edx, 80000h
    __asm mov dword ptr [ebp-4], edx
    __asm groupc:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 0ffffh
    __asm and eax, 0c00h
    __asm mov dword ptr [ebp-8], eax
    __asm cmp dword ptr [ebp-8], 800h
    __asm jg gh
    __asm cmp dword ptr [ebp-8], 800h
    __asm je g800
    __asm cmp dword ptr [ebp-8], 0
    __asm je g0
    __asm cmp dword ptr [ebp-8], 400h
    __asm je g400
    __asm jmp gd
    __asm gh:
    __asm cmp dword ptr [ebp-8], 0c00h
    __asm je gc00
    __asm jmp gd
    __asm g0:
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ebp-4], ecx
    __asm jmp gd
    __asm g800:
    __asm mov edx, dword ptr [ebp-4]
    __asm or dh, 2
    __asm mov dword ptr [ebp-4], edx
    __asm jmp gd
    __asm g400:
    __asm mov eax, dword ptr [ebp-4]
    __asm or ah, 1
    __asm mov dword ptr [ebp-4], eax
    __asm jmp gd
    __asm gc00:
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ch, 3
    __asm mov dword ptr [ebp-4], ecx
    __asm gd:
    __asm mov edx, dword ptr [ebp+8]
    __asm and edx, 0ffffh
    __asm and edx, 300h
    __asm mov dword ptr [ebp-0ch], edx
    __asm cmp dword ptr [ebp-0ch], 0
    __asm je m0
    __asm cmp dword ptr [ebp-0ch], 200h
    __asm je m2
    __asm cmp dword ptr [ebp-0ch], 300h
    __asm je m3
    __asm jmp md
    __asm m3:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [ebp-4], eax
    __asm jmp md
    __asm m2:
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ecx, 10000h
    __asm mov dword ptr [ebp-4], ecx
    __asm jmp md
    __asm m0:
    __asm mov edx, dword ptr [ebp-4]
    __asm or edx, 20000h
    __asm mov dword ptr [ebp-4], edx
    __asm md:
    __asm mov eax, dword ptr [ebp+8]
    __asm and eax, 0ffffh
    __asm and eax, 1000h
    __asm test eax, eax
    __asm je done
    __asm mov ecx, dword ptr [ebp-4]
    __asm or ecx, 40000h
    __asm mov dword ptr [ebp-4], ecx
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
